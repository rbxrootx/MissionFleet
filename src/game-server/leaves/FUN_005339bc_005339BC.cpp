// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005339BC .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_005339bc_005339BC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 8F FB FF: call 0x4ec9c3
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 23 A1 FB FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
