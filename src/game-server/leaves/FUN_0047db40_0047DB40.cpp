// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DB40 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_0047db40_0047DB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 08: jmp 0x47db61
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 AF 00 00 00: call 0x47dc10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 10h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 E3 00 00 00: call 0x47dc50
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x47db91
        __asm _emit 0x74
        __asm _emit 0x1b
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 62 00 00 00: call 0x47dbe0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 F6 FF FF: call 0x47d1e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB C8: jmp 0x47db59
        __asm _emit 0xeb
        __asm _emit 0xc8
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 45 AC 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
