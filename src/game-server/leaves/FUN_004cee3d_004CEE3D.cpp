// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEE3D .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_004cee3d_004CEE3D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 09 E9 01 00: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        push eax
        ; Exact mapped bytes E8 4E EC FD FF: call 0x4adab0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4cee7a
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 0E E2 FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB DC: jmp 0x4cee56
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 74 3F: je 0x4ceec3
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2D 20 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        sub eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 DE D9 FD FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FC 1F 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
