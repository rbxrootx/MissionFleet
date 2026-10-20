// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E77A .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5883e77a_5883E77A() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        push esi
        xor esi, esi
        mov al, byte ptr [edx]
        test al, al
        ; Exact mapped bytes 74 15: je 0x5883e7a1
        __asm _emit 0x74
        __asm _emit 0x15
        cmp al, 0dh
        ; Exact mapped bytes 74 11: je 0x5883e7a1
        __asm _emit 0x74
        __asm _emit 0x11
        cmp al, 0ah
        ; Exact mapped bytes 74 0D: je 0x5883e7a1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov byte ptr [ecx], al
        inc ecx
        inc edx
        inc esi
        cmp esi, 3ffh
        ; Exact mapped bytes 7C E5: jl 0x5883e786
        __asm _emit 0x7c
        __asm _emit 0xe5
        mov byte ptr [ecx], 0
        lea ecx, [edx + 1]
        cmp byte ptr [edx], 0dh
        pop esi
        cmovne ecx, edx
        cmp byte ptr [ecx], 0ah
        lea eax, [ecx + 1]
        cmovne eax, ecx
        pop ebp
        ret
    }
}
