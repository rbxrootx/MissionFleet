// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00498D30 .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_00498d30_00498D30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e589h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 21: jne 0x498d78
        __asm _emit 0x75
        __asm _emit 0x21
        push 5cae98h
        push 0
        push 33eh
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 C1 7D 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x498d78
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x498d51
        __asm _emit 0x75
        __asm _emit 0xd3
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 0F 86 DA 00 00 00: jbe 0x498e6c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 56 1B 00 00: call 0x49a8f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A7 1B 00 00: call 0x49a950
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 58dbd0h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 73: jl 0x498e36
        __asm _emit 0x7c
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 21: jne 0x498dec
        __asm _emit 0x75
        __asm _emit 0x21
        push 5cae74h
        push 0
        push 346h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 4D 7D 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x498dec
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x498dc3
        __asm _emit 0x75
        __asm _emit 0xd1
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x498e04
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 73 27: jae 0x498e36
        __asm _emit 0x73
        __asm _emit 0x27
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*8]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 7B 1B 00 00: call 0x49a9a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes EB C5: jmp 0x498dfb
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 B8 45 05 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A4 1A 00 00: call 0x49a910
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
