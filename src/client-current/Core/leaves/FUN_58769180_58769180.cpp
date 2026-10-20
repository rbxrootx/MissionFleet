// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769180 .. +0x410 bytes.
extern "C" __declspec(naked) void FUN_58769180_58769180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5f64h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 616ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6170h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 5f68h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1274h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 1278h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 EB B7 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb7
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x58769223
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 D9 B7 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb7
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 3ffh
        ; Exact mapped bytes 66 23 48 0C: and cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x0c
        movzx eax, cx
        cdq
        mov ecx, 28h
        idiv ecx
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5876922a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 1278h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12ach], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 12a0h], 55555555h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 12a0h], 55555555h
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 14 5F 00 00: mov word ptr [eax + 0x5f14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12a8h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5eb4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ec0h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 16 5F 00 00: mov word ptr [edx + 0x5f16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 340h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10c0h], 1
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 64 01 00 00: mov word ptr [eax + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 168h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f1ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ee4h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 40000000h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ed4h], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5edch], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ee0h], 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ec4h], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 5f08h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 5f09h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ed8h], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5efch], 40000000h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ee8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5f04h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5f00h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ef0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ef4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5f0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ef8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5eech], 40000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5f10h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5each], 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5eb0h], 0
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1288h
        push ecx
        ; Exact mapped bytes E8 EE 39 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12dch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12d4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12d8h], 0
        push 200h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 12e0h
        push edx
        ; Exact mapped bytes E8 AE 39 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 5e98h
        push eax
        ; Exact mapped bytes E8 99 39 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5e88h
        push ecx
        ; Exact mapped bytes E8 83 39 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        push 180h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 3f78h
        push edx
        ; Exact mapped bytes E8 6A 39 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        push 6c0h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 413ch
        push eax
        ; Exact mapped bytes E8 52 39 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587694d3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 13: jge 0x587694ec
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 17ch], 0
        ; Exact mapped bytes EB DE: jmp 0x587694ca
        __asm _emit 0xeb
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 06 2A D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 91 C8 10 00 00: mov word ptr [ecx + 0x10c8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 EB 29 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x29
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 40 04: movzx ax, byte ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x40
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 CA 10 00 00: mov word ptr [ecx + 0x10ca], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xca
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10cch], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10d0h], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10d4h], 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10d8h], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10dch], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10e0h], 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10ech], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10f0h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
