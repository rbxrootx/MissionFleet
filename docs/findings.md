# Findings — 14 September 2026

## Local evidence

Update: the subsequently supplied archives contain historical native servers,
databases and a 2062 client. Their recovery is documented in
[the decompilation project](../decomp/README.md). The inventory below describes
the modern `D:\FleetMission` installation, not the newly supplied package.

The installation identifies itself as FleetMission/NavyFIELD through its
startup instructions, announcement and localization text. The complete static
inventory contains 1,819 files and 2,168,132,300 bytes, excluding localStorage.
There are 1,649 SPR files, 52 CMF maps, 20 KMF missions and 17 DATA files.
No server executable, source tree or server database was identified in the
inventory. The separate MissionFleet workspace initially contained only `.git`.

| Component | Observation | Consequence |
|---|---|---|
| `FleetMission.exe` | Native x86 PE; DirectDraw, DirectSound and Winsock imports | Native Windows host, not a Unity/.NET client |
| `Main.dll` | Native x86 PE; `.text`/`.rdata` have no raw bytes; `.vmp0`/`.vmp1` sections; exports include `AllocScreen`, `InitCGCDLL`, `InitApplicationInfo`, `GetUserId` | Protection marker consistent with VMProtect; ordinary static decompilation does not expose the main gameplay implementation |
| `ITNTL.dll` | Native x86 code; similar screen lifecycle exports; readable sprite/map/database format strings | Useful static evidence for asset layouts; exact role and compatibility with Main.dll are not proven |
| `Start Game.exe` | Version metadata calls it FleetMissionLauncher | Web-based launcher wrapper |
| `node.dll` | Version metadata identifies Miniblink Core, version 2022 | Embedded browser runtime; filename alone does not establish Node.js application code |
| `GameGuard` and `GameGuard.des` | Bundled protection components | Their runtime behavior was not tested |
| `ZJSMCN.ini` | Binary despite `.ini` extension | No readable endpoint configuration established |
| Most DATA and KMF files | Opaque binary payloads | Compression/encryption/record semantics remain unknown |
| SPR and CMF files | `Sangduck Sprite File` / `Sangduck Map File` signatures | Recognizable proprietary asset containers |

ASCII/UTF-16 static strings identify the launcher URL
`https://fmstart.kupai.me/en/` and update manifest
`https://np.kupaisky.com/update/eng.json`. These are evidence strings, not
verified live services. No requests were made to those endpoints. Historical
Korean hostnames in ITNTL.dll do not establish current FleetMission endpoints.

Localization includes error names for unavailable login servers, invalid
servers, invalid versions, duplicate sessions and login timeouts. These establish
client-visible states, not packet opcodes, payload layouts or authentication
algorithms. None of those values were invented for the emulator.

## Public source search

- A [December 2023 server/client thread](https://forum.ragezone.com/threads/navyfield-download-link.1223163/)
  describes a Chinese package and a Mega mirror. A participant reports both
  client and server working under XP SP3 in VirtualBox. Download links and the
  archive password are hidden behind forum login. No archive was downloaded;
  provenance, contents and compatibility remain unverified.
- The [2.062 release thread](https://forum.ragezone.com/threads/navyfield-2062-server-files.897969/)
  contains release claims, disputes about completeness and additional Korean
  server/client links hidden behind login. It does not establish a usable package
  for this installation.
- A [2016 independent server project](https://forum.ragezone.com/threads/navyfield-server-core.1093110/)
  reports data-structure analysis and backend plans. The visible thread does not
  provide a source repository or a complete downloadable implementation.
- A [historical setup guide](https://forum.ragezone.com/threads/update-new-guide-to-setup-server.91632/)
  describes SQL Server 2000 and ODBC data sources. It is evidence about an old
  package, not a verified deployment procedure for this client.
- The [officially distributed NavyFIELD manual](https://steamcdn-a.akamaihd.net/steam/apps/675560/manuals/NavyField_Full_Manual.pdf)
  is a useful gameplay reference; parity with this exact build is unverified.
- [tskspree/NavyFIELD](https://github.com/tskspree/NavyFIELD) contains collected
  gameplay measurements, not an emulator server.

No verified, openly licensed full FleetMission server implementation was located
in this search. Historical release claims are leads, not completed recovery.

## Deliverables and limits

The independent local API implements account/session/realm/profile/lobby
contracts, with original code under MIT. It is not connected to the proprietary
client, not the recovered original auth server, and has no battle simulation.

The sprite toolkit indexes 367,391 image records across 1,626 files. Twenty-three
files containing sound records are explicitly unsupported. An experimental
RGB565 decoder produces two visually inspected previews from
`ShipStructureF000.spr`. This is partial asset reconstruction, not complete
decompilation or renderer equivalence. See asset-format.md for exact scope.
