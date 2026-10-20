// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F470 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_0051f470_0051F470() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f1d5h
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
        ; Exact mapped bytes E8 3C 6A 02 00: call 0x545ed0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 EA 54 FC FF: call 0x4e4990
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 94h
        ; Exact mapped bytes E8 99 68 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58838ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3ch], 1
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 3F 32 01 00: call 0x532720
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 94h
        ; Exact mapped bytes E8 4F 6B 01 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 48h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 44h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 40h], 0
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
