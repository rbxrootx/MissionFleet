// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055AECE .. +0xF8 bytes.
extern "C" __declspec(naked) void _AddClassIDToList_COleInsertDialog__IAEXAAPAU_GUID__AAH1PAU2__Z_0055AECE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 38: jne 0x55af17
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 10h
        push 213h
        push 5cebe0h
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        shl ecx, 4
        push ecx
        ; Exact mapped bytes E8 2A 21 F9 FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 68: jne 0x55af8b
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        shl ecx, 2
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        push 21ch
        push 5cebe0h
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        shl ecx, 4
        push ecx
        ; Exact mapped bytes E8 E3 20 F9 FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x20
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        shl edx, 4
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 AA E0 F4 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe0
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 81 24 F9 FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        shl ecx, 4
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax]
        add eax, ecx
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
