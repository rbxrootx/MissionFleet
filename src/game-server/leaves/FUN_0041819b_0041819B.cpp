// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041819B .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0041819b_0041819B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        shr al, 5
        and al, 1
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x4181ee
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        or dl, 1
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + 1], 0
        mov eax, 1
        ; Exact mapped bytes EB 20: jmp 0x41820e
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        and cl, 0feh
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 1], 0
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
