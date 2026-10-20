// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588304C7 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_588304c7_588304C7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov al, byte ptr [ebp + 8]
        xor edx, edx
        push esi
        mov esi, ecx
        push 588be36ch
        mov dword ptr [ebp - 4], esi
        lea ecx, [esi + 18h]
        mov dword ptr [esi + 4], 1
        mov dword ptr [esi], 588c19f8h
        mov dword ptr [esi + 8], edx
        mov dword ptr [esi + 0ch], edx
        mov dword ptr [esi + 10h], edx
        mov byte ptr [esi + 14h], al
        mov dword ptr [ecx], edx
        mov byte ptr [ecx + 4], dl
        ; Exact mapped bytes E8 7C 00 00 00: call 0x5883057d
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
