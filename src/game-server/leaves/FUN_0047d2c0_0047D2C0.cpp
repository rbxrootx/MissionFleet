// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D2C0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_0047d2c0_0047D2C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        lea eax, [ebp + 10h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 26 FE FF FF: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x47d312
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        lea ecx, [ebp - 4]
        push ecx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 5F 04 00 00: call 0x47d760
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 70 F9 FF FF: call 0x47cc80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB CC: jmp 0x47d2de
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 B9 B4 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb4
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
