// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412278 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_00412278_00412278() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 208h
        push ebx
        push esi
        lea eax, [ebp - 4]
        push edi
        push eax
        mov esi, ecx
        push 0
        ; Exact mapped bytes E8 17 2B 02 00: call 0x434da8
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x41229b
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 1C C5 43 00: call dword ptr [0x43c51c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test byte ptr [ebp + 8], 8
        push 1
        pop edx
        ; Exact mapped bytes 74 04: je 0x4122a8
        __asm _emit 0x74
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 09: jmp 0x4122b1
        __asm _emit 0xeb
        __asm _emit 0x09
        test byte ptr [ebp + 8], 10h
        ; Exact mapped bytes 74 03: je 0x4122b1
        __asm _emit 0x74
        __asm _emit 0x03
        push 2
        pop edx
        mov ecx, dword ptr [esi + 18h]
        push edx
        lea edx, [ebp - 6]
        lea edi, [esi + 18h]
        push edx
        lea edx, [ebp - 208h]
        push 200h
        push edx
        push -3
        push ecx
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 D2 A2 01 00: call 0x42c5a6
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        mov ebx, eax
        ; Exact mapped bytes 74 0B: je 0x4122e7
        __asm _emit 0x74
        __asm _emit 0x0b
        push 1
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 48 C5 43 00: call dword ptr [0x43c548]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FB 64: cmp bx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x64
        ; Exact mapped bytes 75 0B: jne 0x4122f8
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, esi
        ; Exact mapped bytes E8 5F FD FF FF: call 0x412053
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 31: jmp 0x412329
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [esi]
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x41230c
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        push 43d574h
        mov ecx, edi
        ; Exact mapped bytes E8 1C BA 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 208h]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 FB BB 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        pop eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
