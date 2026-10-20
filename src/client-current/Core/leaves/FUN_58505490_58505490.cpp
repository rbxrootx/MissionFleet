// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505490 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_58505490_58505490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E1 BC 34 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbc
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 4], eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 3D 41 35 00: call 0x588595f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x41
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 06: jne 0x585054c5
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes E8 AC 92 32 00: call 0x5882e770
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x92
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 1B: jmp 0x585054e8
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 76 0C: jbe 0x585054fa
        __asm _emit 0x76
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB D3: jmp 0x585054cd
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
