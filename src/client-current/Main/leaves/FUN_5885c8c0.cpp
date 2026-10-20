// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885C8C0 .. +0x24D bytes.
extern "C" __declspec(naked) void FUN_5885c8c0() {
    __asm {
        push -1
        push 589856c8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, ecx
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [ebx], 5899eaa0h
        xor edi, edi
        mov dword ptr [esp + 20h], edi
        lea esi, [ebx + 0b0h]
        lea ebp, [edi + 2]
        mov ecx, dword ptr [esi - 8]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5885c912
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 8], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x5885c922
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], edi
        mov ecx, dword ptr [esi + 8]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5885c934
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 8], edi
        mov ecx, dword ptr [esi + 10h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5885c946
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 10h], edi
        mov ecx, dword ptr [esi + 18h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5885c958
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 18h], edi
        mov ecx, dword ptr [esi + 20h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5885c96a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 20h], edi
        mov ecx, dword ptr [esi + 28h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5885c97c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 28h], edi
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x5885c98e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 30h], edi
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x5885c900
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0e8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885c9b2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0e8h], edi
        mov ecx, dword ptr [ebx + 0ech]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885c9ca
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0ech], edi
        mov ecx, dword ptr [ebx + 0f0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885c9e2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0f0h], edi
        mov ecx, dword ptr [ebx + 0f4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885c9fa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0f4h], edi
        mov ecx, dword ptr [ebx + 0f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885ca12
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0f8h], edi
        mov ecx, dword ptr [ebx + 0fch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885ca2a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0fch], edi
        mov ecx, dword ptr [ebx + 100h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885ca42
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 100h], edi
        mov ecx, dword ptr [ebx + 104h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885ca5a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 104h], edi
        mov ecx, dword ptr [ebx + 108h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885ca72
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 108h], edi
        mov ecx, dword ptr [ebx + 10ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885ca8a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 10ch], edi
        mov ecx, dword ptr [ebx + 110h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885caa2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 110h], edi
        mov ecx, dword ptr [ebx + 114h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885caba
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 114h], edi
        mov ecx, dword ptr [ebx + 118h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885cad2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 118h], edi
        mov ecx, dword ptr [ebx + 11ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5885caea
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 11ch], edi
        mov ecx, ebx
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 47 B3 FF FF: call 0x58857e40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
