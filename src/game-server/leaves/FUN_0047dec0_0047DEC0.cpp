// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DEC0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0047dec0_0047DEC0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes EB 08: jmp 0x47decd
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 73 F1 FF FF: call 0x47d040
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 37 F2 FF FF: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x47def1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB D4: jmp 0x47dec5
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp ebp, esp
        ; Exact mapped bytes E8 E8 A8 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebp
        ret
    }
}
