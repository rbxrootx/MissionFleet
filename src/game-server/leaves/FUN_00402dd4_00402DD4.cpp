// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402DD4 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_00402dd4_00402DD4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 224h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 224h]
        mov ecx, 89h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 220h], ecx
        mov dword ptr [ebp - 208h], 80h
        mov dword ptr [ebp - 20ch], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 210h], ecx
        lea edx, [ebp - 208h]
        push edx
        lea eax, [ebp - 20ch]
        push eax
        lea ecx, [ebp - 210h]
        push ecx
        ; Exact mapped bytes E8 8A 09 00 00: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x402f34
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 214h], 400h
        mov dword ptr [ebp - 218h], 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 21ch], eax
        lea ecx, [ebp - 214h]
        push ecx
        lea edx, [ebp - 218h]
        push edx
        lea eax, [ebp - 21ch]
        push eax
        ; Exact mapped bytes E8 45 09 00 00: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x402f34
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 190h]
        push edx
        mov eax, dword ptr [ebp - 220h]
        mov ecx, dword ptr [eax + 0d74h]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes E8 FC 08 00 00: call 0x4037a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x402efd
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes E8 58 61 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0fffffe08h
        mov ecx, 81h
        lea esi, [ebp - 204h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 190h]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        mov edx, dword ptr [ecx + 0d74h]
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes E8 F5 08 00 00: call 0x4037f0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x402f32
        __asm _emit 0xeb
        __asm _emit 0x35
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 0C E4 FF FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        mov edx, dword ptr [ebp - 224h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 AE 58 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x402f3c
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 41 08 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 224h
        cmp ebp, esp
        ; Exact mapped bytes E8 90 58 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
