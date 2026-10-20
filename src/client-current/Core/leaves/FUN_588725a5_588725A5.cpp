// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588725A5 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_588725a5_588725A5() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push 0ah
        pop esi
        cmp dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 7D 0A: jge 0x588725bd
        __asm _emit 0x7d
        __asm _emit 0x0a
        cmp byte ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 04: jne 0x588725bd
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 20h
        ; Exact mapped bytes EB 08: jmp 0x588725c5
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        cdq
        idiv esi
        add al, 30h
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx], al
        mov eax, dword ptr [ebp + 0ch]
        cdq
        idiv esi
        lea eax, [ecx + 2]
        add dl, 30h
        mov byte ptr [ecx + 1], dl
        pop esi
        pop ebp
        ret
    }
}
