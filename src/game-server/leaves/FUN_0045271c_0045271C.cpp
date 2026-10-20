// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045271C .. +0x1A9 bytes.
extern "C" __declspec(naked) void FUN_0045271c_0045271C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        push 0
        ; Exact mapped bytes E8 6C 75 05 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 4D 9A 05 00: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x9a
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        push 74h
        ; Exact mapped bytes E8 60 AC 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 14h]
        add eax, 76ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 10h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 14h], ecx
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 18h
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0C 60 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 28h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F2 5F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 10h]
        mov byte ptr [eax + 38h], cl
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp + 14h]
        mov byte ptr [edx + 39h], al
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp + 18h]
        mov byte ptr [ecx + 3ah], dl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 3ch], ecx
        push 0ch
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 40h
        push eax
        ; Exact mapped bytes E8 FC 67 05 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4ch
        push edx
        ; Exact mapped bytes E8 E7 67 05 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 28: mov cx, word ptr [ebp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x28
        ; Exact mapped bytes 66 89 48 64: mov word ptr [eax + 0x64], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 45 2C: mov ax, word ptr [ebp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x2c
        ; Exact mapped bytes 66 89 42 66: mov word ptr [edx + 0x66], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 55 30: mov dx, word ptr [ebp + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x30
        ; Exact mapped bytes 66 89 51 68: mov word ptr [ecx + 0x68], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 34h]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 38h]
        mov dword ptr [edx + 70h], eax
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D 5F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 8
        ; Exact mapped bytes E8 88 AF 00 00: call 0x45d820
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 34 5F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AC 9E 00 00: call 0x45c760
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 21 5F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 34 00: ret 0x34
        __asm _emit 0xc2
        __asm _emit 0x34
        __asm _emit 0x00
    }
}
