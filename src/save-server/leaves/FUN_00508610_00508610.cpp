// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508610 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_00508610_00508610() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ecb5h
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
        ; Exact mapped bytes E8 1C 8A 03 00: call 0x541050
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 3A 67 FB FF: call 0x4bed80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 94h
        ; Exact mapped bytes E8 6F 9B 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63a9b4h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3ch], 1
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 68 DE 01 00: call 0x5264e9
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 94h
        ; Exact mapped bytes E8 07 9E 02 00: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9e
        __asm _emit 0x02
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
