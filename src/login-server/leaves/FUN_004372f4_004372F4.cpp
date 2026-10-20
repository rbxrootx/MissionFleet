// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004372F4 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_004372f4_004372F4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30ch
        push ebx
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 AC E9 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        mov eax, dword ptr [esi + 68h]
        mov ebx, 104h
        mov dword ptr [edi + 8], eax
        mov eax, dword ptr [esi + 68h]
        mov dword ptr [edi + 0ch], eax
        lea eax, [ebp - 20ch]
        push ebx
        push eax
        push dword ptr [esi + 68h]
        ; Exact mapped bytes FF 15 74 C2 43 00: call dword ptr [0x43c274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 20ch]
        push 2eh
        push eax
        ; Exact mapped bytes E8 EA 87 FE FF: call 0x41fb23
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        and byte ptr [eax], 0
        pop ecx
        pop ecx
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 108h]
        push ebx
        push eax
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 BC 00 00 00: call 0x437411
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp dword ptr [esi + 88h], ebx
        ; Exact mapped bytes 75 13: jne 0x437372
        __asm _emit 0x75
        __asm _emit 0x13
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 D1 9D FE FF: call 0x42113c
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [esi + 88h], eax
        cmp dword ptr [esi + 78h], ebx
        ; Exact mapped bytes 75 32: jne 0x4373a9
        __asm _emit 0x75
        __asm _emit 0x32
        lea eax, [ebp - 30ch]
        push 100h
        push eax
        push 0e000h
        ; Exact mapped bytes E8 74 B2 FF FF: call 0x432601
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x43739a
        __asm _emit 0x74
        __asm _emit 0x09
        lea eax, [ebp - 30ch]
        push eax
        ; Exact mapped bytes EB 06: jmp 0x4373a0
        __asm _emit 0xeb
        __asm _emit 0x06
        push dword ptr [esi + 88h]
        ; Exact mapped bytes E8 97 9D FE FF: call 0x42113c
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [esi + 78h], eax
        mov eax, dword ptr [esi + 78h]
        mov dword ptr [edi + 10h], eax
        cmp dword ptr [esi + 8ch], ebx
        lea edi, [esi + 8ch]
        ; Exact mapped bytes 75 21: jne 0x4373de
        __asm _emit 0x75
        __asm _emit 0x21
        mov ebx, dword ptr [ebp - 4]
        push 43f108h
        push ebx
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 64 9D FE FF: call 0x42113c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [edi], eax
        and byte ptr [ebx], 0
        pop ecx
        cmp dword ptr [esi + 90h], 0
        ; Exact mapped bytes 75 25: jne 0x43740c
        __asm _emit 0x75
        __asm _emit 0x25
        lea eax, [ebp - 108h]
        push 43f100h
        push eax
        ; Exact mapped bytes FF 15 EC C1 43 00: call dword ptr [0x43c1ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 37 9D FE FF: call 0x42113c
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [esi + 90h], eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
