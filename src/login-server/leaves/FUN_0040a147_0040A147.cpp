// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A147 .. +0x20C bytes.
extern "C" __declspec(naked) void FUN_0040a147_0040A147() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439d83h
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
        sub esp, 8ch
        mov dword ptr [ebp - 94h], ecx
        push 40c88h
        ; Exact mapped bytes E8 4B 0C 00 00: call 0x40adc0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 1A: je 0x40a1a5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 33 F3 FF FF: call 0x4094d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40a1af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [edx + 78h], eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 D7 A0 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        push 0
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 43 D9 FF FF: call 0x407b30
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes 66 C7 45 E4 02 00: mov word ptr [ebp - 0x1c], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes 66 8B 91 60 01 00 00: mov dx, word ptr [ecx + 0x160]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 B8 C5 43 00: call dword ptr [0x43c5b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 E6: mov word ptr [ebp - 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe6
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax + 160h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x40a2df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 BC 55 00 00: call 0x40f800
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x40a26d
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 160h]
        push eax
        push 4493fch
        push 449408h
        ; Exact mapped bytes E8 CC B9 FF FF: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F AF 02 00: call 0x4351fa
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 72: jmp 0x40a2df
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        push 449410h
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 57 28 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 27 47 02 00: call 0x42e9bd
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 0A: jne 0x40a2a5
        __asm _emit 0x75
        __asm _emit 0x0a
        push -1
        ; Exact mapped bytes FF 15 40 C5 43 00: call dword ptr [0x43c540]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x40a2df
        __asm _emit 0xeb
        __asm _emit 0x3a
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 F0 0A 00 00: call 0x40ada0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 66 C7 45 E4 02 00: mov word ptr [ebp - 0x1c], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 94h]
        ; Exact mapped bytes 66 8B 82 60 01 00 00: mov ax, word ptr [edx + 0x160]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 E6: mov word ptr [ebp - 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe6
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x40a225
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        push 449434h
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 E5 27 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edx + 40c80h]
        mov ecx, dword ptr [eax + 40d00h]
        ; Exact mapped bytes E8 F0 87 FF FF: call 0x402b07
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], 1
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 10 0A 00 00: call 0x40ad40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 6C 38 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
