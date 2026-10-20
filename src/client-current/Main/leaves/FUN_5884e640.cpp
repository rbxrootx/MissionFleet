// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884E640 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_5884e640() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 64h]
        push 406h
        ; Exact mapped bytes E8 90 4C 0B 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [esi + 0cch]
        mov byte ptr [esi + 0d4h], 3
        mov dword ptr [esi + 0dch], 0ffffffffh
        xor eax, eax
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 0d0h]
        mov ecx, esi
        mov dword ptr [edx + 50h], eax
        pop esi
        ; Exact mapped bytes E9 89 FB FF FF: jmp 0x5884e210
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
