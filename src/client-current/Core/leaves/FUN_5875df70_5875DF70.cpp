// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875DF70 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_5875df70_5875DF70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        cmp eax, 0bh
        ; Exact mapped bytes 75 3F: jne 0x5875dfc0
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 1288h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        add eax, 8
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, 8
        shl ecx, 0
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx + 1288h]
        mov dword ptr [ecx + edx], eax
        ; Exact mapped bytes EB 46: jmp 0x5875e006
        __asm _emit 0xeb
        __asm _emit 0x46
        movzx edx, word ptr [ebp + 8]
        cmp edx, 0ch
        ; Exact mapped bytes 75 3D: jne 0x5875e006
        __asm _emit 0x75
        __asm _emit 0x3d
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 1288h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        add ecx, 8
        mov edx, 4
        shl edx, 0
        mov eax, 8
        shl eax, 0
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax + 1288h]
        mov dword ptr [eax + edx], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
