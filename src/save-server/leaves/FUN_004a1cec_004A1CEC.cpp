// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1CEC .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_004a1cec_004A1CEC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c34eh
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F5 2F 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5B 7F 03 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a1d3d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2e7h
        push 671534h
        ; Exact mapped bytes E8 08 70 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a1d3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4a1d19
        __asm _emit 0x75
        __asm _emit 0xd6
        lea edx, [ebp + 10h]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 14h]
        push eax
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        push 0
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4B 30 08 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        push 500h
        ; Exact mapped bytes FF 15 04 B8 68 00: call dword ptr [0x68b804]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4a1d75
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 05: jne 0x4a1d7a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 62 11 00 00: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 AE 02 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 14 BA 68 00: call dword ptr [0x68ba14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 46 AB 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
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
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
