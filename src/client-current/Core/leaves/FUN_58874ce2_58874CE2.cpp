// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874CE2 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_58874ce2_58874CE2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        push 101h
        xor esi, esi
        lea eax, [ebx + 18h]
        push esi
        push eax
        ; Exact mapped bytes E8 12 81 FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebx + 4], esi
        mov dword ptr [ebx + 8], esi
        lea edi, [ebx + 0ch]
        mov dword ptr [ebx + 21ch], esi
        xor eax, eax
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov ecx, esi
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov al, byte ptr [ecx + 58907820h]
        mov byte ptr [ebx + ecx + 18h], al
        inc ecx
        cmp ecx, 101h
        ; Exact mapped bytes 7C ED: jl 0x58874d17
        __asm _emit 0x7c
        __asm _emit 0xed
        mov al, byte ptr [esi + 58907921h]
        mov byte ptr [ebx + esi + 119h], al
        inc esi
        cmp esi, 100h
        ; Exact mapped bytes 7C EA: jl 0x58874d2a
        __asm _emit 0x7c
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
