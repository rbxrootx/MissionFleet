// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588316E2 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_588316e2_588316E2() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push esi
        mov ecx, dword ptr [eax + 3ch]
        add ecx, eax
        movzx eax, word ptr [ecx + 14h]
        lea edx, [ecx + 18h]
        add edx, eax
        movzx eax, word ptr [ecx + 6]
        imul esi, eax, 28h
        add esi, edx
        ; Exact mapped bytes EB 15: jmp 0x58831717
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [edx + 0ch]
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 72 0A: jb 0x58831714
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, dword ptr [edx + 8]
        add eax, ecx
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 72 0C: jb 0x58831720
        __asm _emit 0x72
        __asm _emit 0x0c
        add edx, 28h
        cmp edx, esi
        ; Exact mapped bytes 75 E7: jne 0x58831702
        __asm _emit 0x75
        __asm _emit 0xe7
        xor eax, eax
        pop esi
        pop ebp
        ret
        mov eax, edx
        ; Exact mapped bytes EB F9: jmp 0x5883171d
        __asm _emit 0xeb
        __asm _emit 0xf9
    }
}
