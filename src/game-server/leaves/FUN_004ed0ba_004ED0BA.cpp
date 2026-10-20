// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED0BA .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_004ed0ba_004ED0BA() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        neg eax
        sbb eax, eax
        and eax, 3
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 EC DB FB FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdb
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
