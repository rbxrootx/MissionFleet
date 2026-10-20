// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504258 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_00504258_00504258() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 7eh
        push 677834h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 EC 5F FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 18h]
        ; Exact mapped bytes 0F 86 A3 00 00 00: jbe 0x504326
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x5042a9
        __asm _emit 0x75
        __asm _emit 0x14
        push 86h
        push 677834h
        ; Exact mapped bytes E8 9C 4A 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5042a9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x50428c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 05: jne 0x5042bd
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 1F EC F9 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xec
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 0E: jae 0x5042d3
        __asm _emit 0x73
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB EA: jmp 0x5042bd
        __asm _emit 0xeb
        __asm _emit 0xea
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5042f0
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 19: jmp 0x504309
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 05: jne 0x504314
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 C8 EB F9 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 20h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], eax
        push 9bh
        push 677834h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 27 5F FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
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
