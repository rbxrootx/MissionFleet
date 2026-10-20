// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004011E8 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_004011e8_004011E8() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439354h
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
        sub esp, 10h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x4012e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4480d0h
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 19ch
        push ecx
        ; Exact mapped bytes E8 B8 B8 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 7E 30 00 00: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x40124b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 CA 32 00 00: call 0x404520
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 35: jge 0x401290
        __asm _emit 0x7d
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 D6 32 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 4480d8h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 66 B8 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 19ch
        ; Exact mapped bytes E8 CF CC 02 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x401242
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 29h
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 19ch
        ; Exact mapped bytes E8 30 30 00 00: call 0x4042d0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 19ch
        ; Exact mapped bytes E8 B9 CD 02 00: call 0x42e06b
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        add edx, 19ch
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 1D CA 02 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 CE C8 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x4012e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
