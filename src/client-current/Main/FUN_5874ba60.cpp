// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874BA60 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5874ba60() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5874ba72
        __asm _emit 0x74
        __asm _emit 0x08
        cmp ecx, 7fffffffh
        ; Exact mapped bytes 76 05: jbe 0x5874ba77
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, 80070057h
        test eax, eax
        ; Exact mapped bytes 7C 40: jl 0x5874babb
        __asm _emit 0x7c
        __asm _emit 0x40
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        lea esi, [ecx - 1]
        mov ecx, dword ptr [esp + 18h]
        lea eax, [esp + 1ch]
        push eax
        push ecx
        push esi
        push edi
        xor ebx, ebx
        ; Exact mapped bytes E8 A0 13 23 00: call 0x5897ce38
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x13
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x5874baae
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp eax, esi
        ; Exact mapped bytes 77 0B: ja 0x5874baae
        __asm _emit 0x77
        __asm _emit 0x0b
        ; Exact mapped bytes 75 11: jne 0x5874bab6
        __asm _emit 0x75
        __asm _emit 0x11
        mov byte ptr [esi + edi], bl
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret
        mov byte ptr [esi + edi], bl
        mov ebx, 8007007ah
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret
    }
}
