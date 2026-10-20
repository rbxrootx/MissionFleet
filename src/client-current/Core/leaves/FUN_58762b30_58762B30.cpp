// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762B30 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_58762b30_58762B30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 99 1E D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 6
        ; Exact mapped bytes 74 13: je 0x58762b70
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 7
        ; Exact mapped bytes 75 64: jne 0x58762bd4
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 340h], 0
        ; Exact mapped bytes 75 58: jne 0x58762bd4
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 C6 CB D4 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xcb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes F2 0F 2A 45 F4: cvtsi2sd xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 0ch]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 5A 45 E8: cvtsd2ss xmm0, qword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F3 0F 59 05 C0 52 89 58: mulss xmm0, dword ptr [0x588952c0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 E8 24 D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 07: jge 0x58762bd4
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x58762bd6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
