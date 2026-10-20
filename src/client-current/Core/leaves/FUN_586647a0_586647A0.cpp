// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586647A0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_586647a0_586647A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 24: jne 0x586647d3
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1C: je 0x586647d1
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ch
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 18 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586647ef
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ch
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B2 18 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x18
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0a0h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 5
        ; Exact mapped bytes 75 0E: jne 0x5866481e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
