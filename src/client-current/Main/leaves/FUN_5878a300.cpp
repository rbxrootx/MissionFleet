// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878A300 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_5878a300() {
    __asm {
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 4]
        push edi
        mov edi, dword ptr [esi + 14h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 41: jl 0x5878a359
        __asm _emit 0x7c
        __asm _emit 0x41
        mov edi, dword ptr [esi + 1ch]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 38: jge 0x5878a359
        __asm _emit 0x7d
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 18h]
        mov edx, dword ptr [eax + 8]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 29: jl 0x5878a359
        __asm _emit 0x7c
        __asm _emit 0x29
        mov edi, dword ptr [esi + 20h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 20: jge 0x5878a359
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [eax + 4]
        mov eax, edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 09 E4 17 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push 0
        push 0f765h
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
