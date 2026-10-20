// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00405C80 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_00405c80_00405C80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 4394f5h
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
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 C8 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 F3 E5 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 E1 E5 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 CF E5 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 BD E5 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 4B 78 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43c660h
        push 44da34h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 13 80 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da38h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 00 80 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da3ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 ED 7F 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da40h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 DA 7F 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 5
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 1
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
