// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441EB0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_00441eb0_00441EB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A 00 00 00: call 0x441ef0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x441ed9
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 30 B1 0A 00: call 0x4ed009
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 FA 68 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
