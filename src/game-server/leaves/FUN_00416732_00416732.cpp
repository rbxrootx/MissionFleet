// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416732 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_00416732_00416732() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 80000000h
        cmp dword ptr [ebp + 8], 20h
        ; Exact mapped bytes 73 1C: jae 0x416772
        __asm _emit 0x73
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        shr eax, cl
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        or edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 24h], edx
        ; Exact mapped bytes EB 70: jmp 0x4167e2
        __asm _emit 0xeb
        __asm _emit 0x70
        cmp dword ptr [ebp + 8], 40h
        ; Exact mapped bytes 73 1F: jae 0x416797
        __asm _emit 0x73
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        mov edx, dword ptr [ebp - 4]
        shr edx, cl
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 28h]
        or ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 28h], ecx
        ; Exact mapped bytes EB 4B: jmp 0x4167e2
        __asm _emit 0xeb
        __asm _emit 0x4b
        cmp dword ptr [ebp + 8], 60h
        ; Exact mapped bytes 73 1F: jae 0x4167bc
        __asm _emit 0x73
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 40h
        mov eax, dword ptr [ebp - 4]
        shr eax, cl
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 2ch]
        or edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 2ch], edx
        ; Exact mapped bytes EB 26: jmp 0x4167e2
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp + 8], 80h
        ; Exact mapped bytes 73 1D: jae 0x4167e2
        __asm _emit 0x73
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 60h
        mov edx, dword ptr [ebp - 4]
        shr edx, cl
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 30h]
        or ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 30h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
