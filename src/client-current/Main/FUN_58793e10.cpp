// Preserve the target's C-style linker name while using its ECX fastcall input.
extern "C" int __fastcall FUN_58793e10(const void* object) asm("_FUN_58793e10");

extern "C" int __fastcall FUN_58793e10(const void* object) {
    const auto* bytes = static_cast<const unsigned char*>(object);
    return *reinterpret_cast<const int*>(bytes + 0x5c) == 2;
}
