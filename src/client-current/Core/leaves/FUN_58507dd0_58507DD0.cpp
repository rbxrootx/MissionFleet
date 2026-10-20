// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507DD0 .. +0x202 bytes.
extern "C" __declspec(naked) void FUN_58507dd0_58507DD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 290h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 274h], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 588a3aa8h
        lea ecx, [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 C1 DC FF FF: call 0x58505ac0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 0
        push 0
        push 3
        push 0
        push 3
        push 0c0000000h
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 278h], eax
        cmp dword ptr [ebp - 278h], -1
        ; Exact mapped bytes 75 24: jne 0x58507e4e
        __asm _emit 0x75
        __asm _emit 0x24
        push 588a3a9eh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 1C FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 274h]
        or eax, 1
        mov dword ptr [ebp - 274h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 76 01 00 00: jmp 0x58507fc4
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 228h
        push 0
        lea ecx, [ebp - 26ch]
        push ecx
        ; Exact mapped bytes E8 AF 4F 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4f
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 26ch]
        mov dword ptr [ebp - 270h], edx
        mov eax, 28h
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov edx, 2
        mov eax, dword ptr [ebp - 270h]
        ; Exact mapped bytes 66 89 50 02: mov word ptr [eax + 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 270h]
        mov dword ptr [ecx + 8], 200h
        mov edx, dword ptr [ebp - 270h]
        mov dword ptr [edx + 0ch], 5
        mov eax, dword ptr [ebp - 270h]
        mov dword ptr [eax + 14h], 28h
        mov ecx, 1
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 270h]
        mov byte ptr [eax + edx + 20h], 0ech
        mov dword ptr [ebp - 27ch], 0
        push 0
        lea ecx, [ebp - 27ch]
        push ecx
        push 228h
        lea edx, [ebp - 26ch]
        push edx
        push 228h
        lea eax, [ebp - 26ch]
        push eax
        push 4d02ch
        mov ecx, dword ptr [ebp - 278h]
        push ecx
        ; Exact mapped bytes FF 15 F8 41 89 58: call dword ptr [0x588941f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 280h], eax
        mov edx, dword ptr [ebp - 278h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 280h], 0
        ; Exact mapped bytes 75 6D: jne 0x58507f8e
        __asm _emit 0x75
        __asm _emit 0x6d
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 284h], eax
        push 588a3abch
        push 58966260h
        ; Exact mapped bytes E8 B4 C6 FF FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 288h], eax
        mov eax, dword ptr [ebp - 284h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 09 F5 FF FF: call 0x58507460
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        push 58505a20h
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 C3 F6 FF FF: call 0x58507630
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push 588a3a9fh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 1B FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 274h]
        or ecx, 1
        mov dword ptr [ebp - 274h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 36: jmp 0x58507fc4
        __asm _emit 0xeb
        __asm _emit 0x36
        lea edx, [ebp - 244h]
        mov dword ptr [ebp - 290h], edx
        push 14h
        mov eax, dword ptr [ebp - 290h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 81 08 00 00: call 0x58508830
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 274h]
        or edx, 1
        mov dword ptr [ebp - 274h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 82 90 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
