// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589761E0 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_589761e0() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 1ch]
        mov ebx, dword ptr [ebp + 4]
        cmp edi, 3b9ac9f0h
        ; Exact mapped bytes 76 0B: jbe 0x58976202
        __asm _emit 0x76
        __asm _emit 0x0b
        push 3
        push ebp
        ; Exact mapped bytes E8 C1 FF FF FF: call 0x589761c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, edi
        and eax, 7
        ; Exact mapped bytes 76 09: jbe 0x58976212
        __asm _emit 0x76
        __asm _emit 0x09
        mov ecx, 8
        sub ecx, eax
        add edi, ecx
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 7C 05: jl 0x5897621f
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp eax, 2
        ; Exact mapped bytes 7C 19: jl 0x58976238
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edx, dword ptr [ebp]
        push ebp
        mov dword ptr [edx + 14h], 0eh
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 18h], eax
        mov edx, dword ptr [ebp]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        lea eax, [edi + 10h]
        push eax
        push ebp
        ; Exact mapped bytes E8 0E 14 00 00: call 0x58977650
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        add esp, 8
        test esi, esi
        ; Exact mapped bytes 75 0B: jne 0x58976256
        __asm _emit 0x75
        __asm _emit 0x0b
        push 4
        push ebp
        ; Exact mapped bytes E8 6D FF FF FF: call 0x589761c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebx + 4ch]
        lea ecx, [edi + 10h]
        add eax, ecx
        mov dword ptr [ebx + 4ch], eax
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [ebx + eax*4 + 3ch]
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi], edx
        mov dword ptr [esi + 8], 0
        mov dword ptr [ebx + eax*4 + 3ch], esi
        lea eax, [esi + 10h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
