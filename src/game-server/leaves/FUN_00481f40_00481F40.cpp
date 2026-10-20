// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481F40 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_00481f40_00481F40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 01 FC FF: call 0x4420d0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x481f69
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A0 B0 06 00: call 0x4ed009
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 6A 68 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
