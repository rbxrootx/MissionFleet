// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884BFAD .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_5884bfad_5884BFAD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        lea eax, [ebp - 1]
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        xor esi, esi
        inc esi
        mov byte ptr [ebp - 1], 50h
        push esi
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push esi
        lea eax, [ebp - 1]
        mov byte ptr [ebp - 1], 4bh
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push esi
        lea eax, [ebp + 0fh]
        mov byte ptr [ebp + 0fh], 7
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push esi
        lea eax, [ebp + 0fh]
        mov byte ptr [ebp + 0fh], 8
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, dword ptr [ebp + 8]
        push 1
        mov al, byte ptr [esi + 0ch]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0ch]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov al, byte ptr [esi + 0eh]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov al, byte ptr [esi + 0fh]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov al, byte ptr [esi + 10h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 10h]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov al, byte ptr [esi + 12h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov al, byte ptr [esi + 13h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov al, byte ptr [esi + 14h]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 14h]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov al, byte ptr [esi + 16h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov al, byte ptr [esi + 17h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 30h
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
