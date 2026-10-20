// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D86C .. +0x26C bytes.
extern "C" __declspec(naked) void FUN_0051d86c_0051D86C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x51d8a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 208h
        push 5cb704h
        ; Exact mapped bytes E8 62 71 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d8a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x51d886
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        and eax, 0a000h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 0E: je 0x51d8ce
        __asm _emit 0x74
        __asm _emit 0x0e
        xor edx, edx
        cmp dword ptr [ebp - 0ch], 0
        sete dl
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 06: jmp 0x51d8d4
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 4C: je 0x51d92c
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x51d92c
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        and dh, 0afh
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 28h
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 E7 2B 01 00: call 0x53050e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 4A: jmp 0x51d976
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        and eax, 5000h
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x51d976
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        and dh, 5fh
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 38h
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 9B 2B 01 00: call 0x53050e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x51dace
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x51da29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        and ecx, 0a000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x51da29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        and ah, 0afh
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 38h
        sub esp, 10h
        mov edx, esp
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 35 2B 01 00: call 0x53050e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        and ch, 0afh
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 28h
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 FA 2A 01 00: call 0x53050e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 8]
        neg ecx
        sbb ecx, ecx
        not ecx
        and ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x51dace
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        and eax, 5000h
        test eax, eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x51dace
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        and dh, 5fh
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 28h
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 90 2A 01 00: call 0x53050e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        and ah, 5fh
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 38h
        sub esp, 10h
        mov edx, esp
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 55 2A 01 00: call 0x53050e
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 8]
        neg eax
        sbb eax, eax
        not eax
        and eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
