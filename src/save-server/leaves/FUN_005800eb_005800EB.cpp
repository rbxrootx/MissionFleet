// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005800EB .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_005800eb_005800EB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B9 4B FA FF: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        ; Exact mapped bytes FF 15 0C BB 68 00: call dword ptr [0x68bb0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x580131
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 AB 2D F2 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x2d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 78 4B FA FF: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
