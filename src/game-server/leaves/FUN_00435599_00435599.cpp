// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435599 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_00435599_00435599() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 100h]
        mov dword ptr [edx + 170h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [edx + 100h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [edx + 100h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes E8 1C 10 05 00: call 0x48660e
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 17ch], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 59 01 00: call 0x44afe7
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 36: jne 0x435642
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [eax + 100h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [eax + 100h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 58 01 00: call 0x44aea7
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 94 31 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
