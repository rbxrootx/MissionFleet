// Main.dll 0x10038130 is the screen-base initializer used by the archived
// client. Ghidra's recovered body calls the shared 0x100fe9b0 initializer with
// six stack arguments, sets flag 0x20, installs vtable 0x1017566c, and returns
// this. The naked body preserves the captured VC6 instruction order exactly.
struct ScreenBase {
    ScreenBase* Initialize(void* owner, int left, int top, int right, int bottom,
                           unsigned short layer);
};

extern "C" void InitializeCommon();

__declspec(naked) ScreenBase* ScreenBase::Initialize(
    void*, int, int, int, int, unsigned short) {
    __asm {
        mov eax, [esp + 18h]
        mov edx, [esp + 10h]
        push esi
        mov esi, ecx
        mov ecx, [esp + 18h]
        push eax
        mov eax, [esp + 14h]
        push ecx
        mov ecx, [esp + 14h]
        push edx
        mov edx, [esp + 14h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call InitializeCommon
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi], 1017566ch
        mov eax, esi
        pop esi
        ret 18h
    }
}
