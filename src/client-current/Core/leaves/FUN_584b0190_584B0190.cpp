// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B0190 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_584b0190_584B0190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC FA FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 48 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 07: jne 0x584b01c2
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, 1
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x584b02ce
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584b01d4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1ch
        ; Exact mapped bytes 0F 8D EE 00 00 00: jge 0x584b02cc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 FA FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 41 CE FD FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x584b020a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB C1: jmp 0x584b01cb
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 2
        ; Exact mapped bytes 75 15: jne 0x584b0234
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 1
        ; Exact mapped bytes 74 2A: je 0x584b025e
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 20h]
        cmp edx, 4
        ; Exact mapped bytes 75 1A: jne 0x584b0263
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 20h]
        cmp edx, 2
        ; Exact mapped bytes 75 05: jne 0x584b0263
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x584b01cb
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 FA FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 91 CD FD FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 75 40: jne 0x584b02c7
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE F9 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6D CD FD FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        ; Exact mapped bytes 75 1C: jne 0x584b02c7
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 40 6F 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 2ah
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AD 8A 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 07: jmp 0x584b02ce
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 FF FE FF FF: jmp 0x584b01cb
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
