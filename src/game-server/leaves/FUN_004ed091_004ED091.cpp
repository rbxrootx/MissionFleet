// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED091 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004ed091_004ED091() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        neg edx
        sbb edx, edx
        and edx, 3
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7D D1 FB FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd1
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 10h
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
