"""Keep alternate Ghidra analyses separate from the pinned evidence project."""
import argparse
import tempfile
import unittest
from pathlib import Path

from tools import run_decompilation


class GhidraPathTests(unittest.TestCase):
    def test_alternate_build_requires_isolated_project_and_output(self):
        with tempfile.TemporaryDirectory() as directory:
            home = Path(directory) / "ghidra_12.1.4_PUBLIC"
            launcher = home / "support" / "analyzeHeadless.bat"
            launcher.parent.mkdir(parents=True)
            launcher.touch()
            args = argparse.Namespace(ghidra_home=str(home), project_dir=None, output_dir=None)
            with self.assertRaisesRegex(ValueError, "separate --project-dir and --output-dir"):
                run_decompilation.analysis_paths(args)
            args.project_dir = str(run_decompilation.DEFAULT_PROJECT / "bundle-probe")
            args.output_dir = str(Path(directory) / "pseudocode")
            with self.assertRaisesRegex(ValueError, "separate --project-dir and --output-dir"):
                run_decompilation.analysis_paths(args)
            args.project_dir = str(Path(directory) / "project")
            args.output_dir = str(Path(directory) / "pseudocode")
            selected, project, output = run_decompilation.analysis_paths(args)
            self.assertEqual(selected, launcher.resolve())
            self.assertEqual(project, Path(args.project_dir).resolve())
            self.assertEqual(output, Path(args.output_dir).resolve())

    def test_platform_launcher_names_are_checked(self):
        with tempfile.TemporaryDirectory() as directory:
            home = Path(directory)
            support = home / "support"
            support.mkdir()
            (support / "analyzeHeadless").touch()
            self.assertEqual(run_decompilation.launcher_for(home, windows=False),
                             support / "analyzeHeadless")
            with self.assertRaisesRegex(ValueError, "analyzeHeadless.bat"):
                run_decompilation.launcher_for(home, windows=True)


if __name__ == "__main__":
    unittest.main()
