// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DAF0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0047daf0_0047DAF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 95 02 00 00: call 0x47dda0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 C8 AC 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
