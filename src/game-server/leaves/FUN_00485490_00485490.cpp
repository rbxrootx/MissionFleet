// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485490 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_00485490_00485490() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E E0 FF FF: call 0x4834d8
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 89 42 4E: mov word ptr [edx + 0x4e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x4e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C E0 FF FF: call 0x48354f
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 89 42 50: mov word ptr [edx + 0x50], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        cmp dword ptr [ecx + 18h], 64h
        ; Exact mapped bytes 7D 23: jge 0x485502
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 4E: mov cx, word ptr [eax + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x4e
        test ecx, ecx
        ; Exact mapped bytes 75 10: jne 0x485502
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], 64h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 73 23: jae 0x485534
        __asm _emit 0x73
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 50: mov dx, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        test edx, edx
        ; Exact mapped bytes 75 10: jne 0x485534
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 1ch], 0
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 D1 FF FF: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 F4 FF FF: call 0x4849d7
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 88 32 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
