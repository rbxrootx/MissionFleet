// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481FC1 .. +0x2AF bytes.
extern "C" __declspec(naked) void FUN_00481fc1_00481FC1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c39ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 3ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 0fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 4
        ; Exact mapped bytes E8 0A EF 0A 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 18d0h
        ; Exact mapped bytes E8 0E 3E 00 00: call 0x485e20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 0ffffh
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 18fch
        ; Exact mapped bytes E8 67 EE F8 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax], 581df0h
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 210h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 20ch], 0
        push 0bfh
        push 5c44d4h
        push 1ch
        ; Exact mapped bytes E8 D2 AF 06 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 12: je 0x482083
        __asm _emit 0x74
        __asm _emit 0x12
        push 400h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 72 3E 00 00: call 0x485ef0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x48208a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 10h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 214h], edx
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 67 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 14h], 320h
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 218h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 18c4h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 18c8h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 18cch], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 18f0h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 18f4h], 0
        push 0cch
        push 5c44d4h
        push 24h
        ; Exact mapped bytes E8 02 AF 06 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x482153
        __asm _emit 0x74
        __asm _emit 0x12
        push 0ffffh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 42 ED F8 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x48215a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 18ech], edx
        push 0ceh
        push 5c44d4h
        push 1ch
        ; Exact mapped bytes E8 DE AE 06 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0F: je 0x48219d
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 68 71 06 00: call 0x4e9300
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4821a4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 18f8h], edx
        push 5c452ch
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 4
        ; Exact mapped bytes E8 33 B9 06 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 214h]
        ; Exact mapped bytes E8 68 E1 FB FF: call 0x440340
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe1
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 22 33 0B 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 EB 65 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 04 39 00 00: call 0x485b00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A8 0B 00 00: call 0x482dac
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F4 13 00 00: call 0x483600
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4A 33 00 00: call 0x48555e
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 28h], esp
        push 5c4540h
        ; Exact mapped bytes E8 B4 B6 06 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 21 41 00 00: call 0x486350
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 2ch], esp
        push 5c4554h
        ; Exact mapped bytes E8 99 B6 06 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 16 42 00 00: call 0x486460
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 76 65 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x65
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
