// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E5F8 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_0041e5f8_0041E5F8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        cmp dword ptr [ebp + 0ch], 0
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, dword ptr [edi + 0ch]
        mov ebx, dword ptr [edi + 10h]
        mov eax, esi
        mov dword ptr [ebp + 8], esi
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7C 39: jl 0x41e64f
        __asm _emit 0x7c
        __asm _emit 0x39
        cmp esi, -1
        ; Exact mapped bytes 75 05: jne 0x41e620
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 6B 3F 00 00: call 0x42258b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        dec esi
        lea eax, [esi + esi*4]
        cmp dword ptr [ebx + eax*4 + 4], ecx
        lea eax, [ebx + eax*4]
        ; Exact mapped bytes 7D 05: jge 0x41e635
        __asm _emit 0x7d
        __asm _emit 0x05
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 05: jle 0x41e63a
        __asm _emit 0x7e
        __asm _emit 0x05
        cmp esi, -1
        ; Exact mapped bytes 75 0C: jne 0x41e646
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        dec dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp + 8], esi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D CA: jge 0x41e616
        __asm _emit 0x7d
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        inc esi
        mov dword ptr [ecx], esi
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], eax
        cmp eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 77 04: ja 0x41e663
        __asm _emit 0x77
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 76 05: jbe 0x41e668
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 23 3F 00 00: call 0x42258b
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + esi*4]
        pop edi
        pop esi
        lea eax, [ebx + eax*4]
        pop ebx
        leave
        ret
    }
}
