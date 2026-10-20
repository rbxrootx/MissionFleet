// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571F50 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_00571f50_00571F50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f898h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FC 9C FF FF: call 0x56bc70
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 7E 2D FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d4h
        ; Exact mapped bytes E8 B5 6D 00 00: call 0x578d50
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d8h
        ; Exact mapped bytes E8 C7 6D 00 00: call 0x578d70
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0dch
        ; Exact mapped bytes E8 D9 6D 00 00: call 0x578d90
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0e0h
        ; Exact mapped bytes E8 EB 6D 00 00: call 0x578db0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0e4h
        ; Exact mapped bytes E8 FD 6D 00 00: call 0x578dd0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63d1ach
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ach], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0bch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d0h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
