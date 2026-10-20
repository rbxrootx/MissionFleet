// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431AFC .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_00431afc_00431AFC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push edi
        push ecx
        lea edi, [ebp - 30h]
        mov ecx, 0ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 24h], 63h
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 68 1C FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x431c33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c0ah]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 67 7F FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16c0ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 42 7F FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c0eh]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1D 7F FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F8 7E FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 09: je 0x431c06
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 09: je 0x431c15
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 09: je 0x431c24
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 09: je 0x431c33
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 4], eax
        push 0
        push 10h
        lea ecx, [ebp - 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 8002011ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 55 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x55
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        add esp, 30h
        cmp ebp, esp
        ; Exact mapped bytes E8 87 6B 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
