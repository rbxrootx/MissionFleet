// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004719F0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_004719f0_004719F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], 0
        push 0
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp edx, 5a4dh
        ; Exact mapped bytes 75 09: jne 0x471a23
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 75 02: jne 0x471a25
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 23: jmp 0x471a48
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 1ah]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 1bh]
        mov byte ptr [eax + 1], dl
        mov esp, ebp
        pop ebp
        ret
    }
}
